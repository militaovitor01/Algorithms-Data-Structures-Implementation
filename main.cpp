#include <iostream>
#include <vector>
#include "Sort Algorithms/SortAlgorithms.hpp"

using namespace std;

int main(){
    vector<int> nums = {64, 25, 12, 22, 11};
    SortAlgorithms sortAlgorithm(nums);

    cout <<"Array padrao: ";
    sortAlgorithm.printArray(nums);

    cout <<"Array ordenado por Selecao: " << endl;
    sortAlgorithm.SelectionSort(nums);

    cout << endl;

    return 0;
}