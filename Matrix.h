//
// Created by Admin on 12.10.2024.
//

#ifndef PEA1_MATRIX_H
#define PEA1_MATRIX_H
#include <vector>
#include <string>


class Matrix {
    public:
        std::vector<std::vector<int>> grid;
        Matrix(int size){
            grid.resize(size);
            for (int i = 0; i < size; i++){
                grid[i].resize(size);
            }
        }

        void FillMatrixSymmetrical();

        void Display();

        void FillMatrixAsymmetrical();

        void LoadMatrixFromFile(const std::string& filename);

};


#endif //PEA1_MATRIX_H
