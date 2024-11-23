// Вариант 10
// Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
// Если в матрице есть столбец, не содержащий простых чисел, сумма элементов которого равна 0,
// упорядочить элементы строк по неубыванию абсолютных величин. 

#include <iostream>
#include "func.hpp"

int main()
{
    int matrix[N_Max][N_Max];
    int n;

    readMatrix(matrix, n);
    processMatrix(matrix, n);
    writeMatrix(matrix, n);

    return 0;
}
