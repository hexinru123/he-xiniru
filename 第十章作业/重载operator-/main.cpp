#include "pch.h"
#include "matrix.h"
using std::endl;
using std::cout;
using std::istream;
const double EPS = 1e-10;
void Matrix::initialize() {
    p = new double*[rows_num];
    for (int i = 0; i < rows_num; ++i) {
            p[i] = new double[cols_num];}

Matrix::Matrix(int rows, int cols)
{
    rows_num = rows;
    cols_num = cols;
    initialize();
    for (int i = 0; i < rows_num; i++) {
            for (int j = 0; j < cols_num; j++) {
                p[i][j] = 0;
            }
    }

}
Matrix::Matrix(int rows, int cols, double value)
{
    rows_num = rows;
    cols_num = cols;
    initialize();
    for (int i = 0; i < rows_num; i++) {
            for (int j = 0; j < cols_num; j++) {
                p[i][j] = value;
                }
    }
}
Matrix::~Matrix() {

}
Matrix& Matrix::operator=(const Matrix& m)
{
    if (this == &m) {
            return *this;
    }
   if (rows_num != m.rows_num || cols_num != m.cols_num) {
        for (int i = 0; i < rows_num; ++i) {
            delete[] p[i];		}

delete[] p;
rows_num = m.rows_num;
cols_num = m.cols_num;
initialize();
}
for (int i = 0; i < rows_num; i++) {
        for (int j = 0; j < cols_num; j++) {
            p[i][j] = m.p[i][j];		}
}
return *this;}
Matrix& Matrix::operator=(double *a){
    for(int i=0;i<rows_num;i++){
            for(int j=0;j<cols_num;j++){
                p[i][j]= *(a+i*cols_num+j);		}	}
return *this;}
Matrix& Matrix::operator+=(const Matrix& m){
    for (int i = 0; i < rows_num; i++) {
            for (int j = 0; j < cols_num; j++) {
                p[i][j] += m.p[i][j];		}	}
    return *this;}
