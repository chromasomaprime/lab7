#pragma once

const int N_Max = 100;

void readMatrix(int matrix[N_Max][N_Max], int& n);
bool isPrime(int num);
bool checkColumn(int matrix[N_Max][N_Max], int n, int col);
void sortRowByAbs(int row[], int n);
void processMatrix(int matrix[N_Max][N_Max], int n);
void writeMatrix(int matrix[N_Max][N_Max], int n);
