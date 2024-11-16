#pragma once

const int N_Max = 100;
const int M_Max = 100;

void Read(int mas[N_Max][M_Max], int& n, int& m);
bool isPrime(int num);
bool checkColumn(int mas[N_Max][M_Max], int n, int m);
void sortRow(int row[], int n);
int rowProduct(int row[], int m);
void proccess(int mas[N_Max][M_Max], int n, int m);
void Write(int mas[N_Max][M_Max], int n, int m);
