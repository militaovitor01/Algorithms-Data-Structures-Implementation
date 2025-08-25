#include <iostream>
#include <vector>
#include "Sort Algorithms/SortAlgorithms.hpp"

using namespace std;

int main(){
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> nums2 = {64, 25, 12, 22, 11};
    SortAlgorithms sortAlgorithmSelection(nums);
    
    cout <<"Array padrao: ";
    sortAlgorithmSelection.printArray(nums);

    cout <<"Array ordenado por Selecao: " << endl;
    sortAlgorithmSelection.SelectionSort(nums);

    cout << endl;

    SortAlgorithms sortAlgorithmBubble(nums2);
    cout <<"Array ordenado por Bubble: " << endl;
    sortAlgorithmBubble.BubbleSort(nums2);

    cout << endl;

    return 0;
}