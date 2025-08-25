# Sort Algorithms

This project provides an implementation of sorting algorithms in C++ within a class-based structure. The main focus is on educational clarity and algorithmic transparency.

## Features
- Modular C++ code for sorting integer arrays
- Easy to extend with new sorting algorithms
- Clear and well-documented code

## Implemented Algorithms


### Selection Sort
Sorts an array by repeatedly finding the minimum element from the unsorted part and moving it to the beginning.

**Complexity:**
- **Best Case:** O(n²)
- **Worst Case:** O(n²)
- **Space Complexity:** O(1) (in-place)

**Implementation:**
```cpp
int SortAlgorithms::SelectionSort(std::vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        // Find the minimum element in the unsorted part
        for(int j = i + 1; j < n; j++) {
            if(array[j] < array[i]){
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        Swap(array[i], array[minIndex]);
    }
}
```


## How to Build

Abra o terminal no diretório do projeto e execute:

```cmd
g++ "Sort Algorithms\SortAlgorithms.cpp" main.cpp -o output\main.exe && output\main.exe
```

Se a pasta `output` não existir, crie-a antes com:

```cmd
mkdir output
```

## Usage

1. Include the `SortAlgorithms.hpp` header in your project.
2. Create a `std::vector<int>` with your data.
3. Instantiate the `SortAlgorithms` class and call the desired sort method.

```cpp
#include "SortAlgorithms.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};
    SortAlgorithms sorter(data);
    sorter.SelectionSort(data);
    for (int num : data) {
        std::cout << num << " ";
    }
    return 0;
}
```

## Extending
To add more sorting algorithms, implement new methods in `SortAlgorithms` and declare them in the header file. Document their time and space complexity in this README.

## License
This project is open source and free to use for educational purposes.
