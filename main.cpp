// Вариант 10
// Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
// Если в матрице есть столбец, не содержащий простых чисел, сумма элементов которого равна 0,
// упорядочить элементы строк по неубыванию абсолютных величин. 



#include <iostream>
#include "func.hpp"

int main()
{
    int n;
    int m;
    int mas[N_Max][M_Max];
    Read(mas, n, m);
    if (checkColumn(mas, n, m))
    {
        proccess(mas,n,m);
    }
    Write(mas, n, m);
    return 0;
}