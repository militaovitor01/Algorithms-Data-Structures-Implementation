#pragma once
#include <vector>
#include <iostream>

class SortAlgorithms {
    private:
        std::vector<int> array; 
    public:
        // Constructors
        SortAlgorithms() = default;
        SortAlgorithms(std::vector<int>& array);

        void printArray(std::vector<int>& array);

        // Swap method
        void Swap(int &elementA, int &elementB);
        
        // Sort Methods
        void SelectionSort(std::vector<int>& array);

};