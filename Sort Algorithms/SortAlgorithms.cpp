#include "SortAlgorithms.hpp"
#include <vector>
#include <iostream>

// Constructor
SortAlgorithms::SortAlgorithms(std::vector<int> &array)
    : array(array)
{
}

void SortAlgorithms::printArray(std::vector<int>& array){
    for (int num : array) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
}

void SortAlgorithms::Swap(int &elementA, int &elementB){
    int aux = elementA;
    elementA = elementB;
    elementB = aux;
}

void SortAlgorithms::SelectionSort(std::vector<int> &array){
    int n = array.size();

    for (int i = 0; i < n - 1; i++){
        int minIndex = i;

        // Encontra o menor elemento no restante do array
        for (int j = i + 1; j < n; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
            }
        }

        // Realiza a troca entre os elementos
        Swap(array[i], array[minIndex]);

        // Passo a passo das trocas
        std::cout << "Iteracao " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            if (k == i || k == minIndex){
                std::cout << "[" << array[k] << "] "; // destaca os elementos trocados
            } else {
                std::cout << array[k] << " ";
            }
        }

        std::cout << std::endl;
    }

    printArray(array);
}

void SortAlgorithms::BubbleSort(std::vector<int>& array){
    int n = array.size();
    bool swapped;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                Swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        // Passo a passo das trocas
        std::cout << "Iteracao " << i + 1 << ": ";
        printArray(array);

        if (!swapped) break;
    }


}

void SortAlgorithms::InsertionSort(std::vector<int>& array){
    int n = array.size();
    
    for(int i = 0; i < n; i++){
        int sorted = i;

    }

}