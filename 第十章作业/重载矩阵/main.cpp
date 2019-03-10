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
void Matrix::Show() const {	//
    cout << rows_num <<" "<<cols_num<< endl;
    for (int i = 0; i < rows_num; i++) {
            for (int j = 0; j < cols_num; j++) {
                cout << p[i][j] << " ";		}
cout << endl;	}
cout << endl;}
Matrix::swapRows(int a, int b){	a--;	b--;
double *temp = p[a];
p[a] = p[b];
p[b] = temp;}
double Matrix::det(){
    double ** back_up;
    back_up=new double *[rows_num];
    for(int i=0;i<rows_num;i++){
            back_up[i]=new double[cols_num];	}
    for(int i=0;i<rows_num;i++){
        for(int j=0;j<cols_num;j++){
            back_up[i][j]=p[i][j];		}	}
      if(rows_num!=cols_num){
        std::abort();
      double ans=1;
    for(int i=0;i<rows_num;i++){
        if(abs(p[i][i])<=EPS){
            bool flag=false;
    for(int j=0;(j<cols_num)&&(!flag);j++){
        if((abs(p[i][j])>EPS)&&(abs(p[j][i])>EPS)){
            flag=true;
    double temp;
    for(int k=0;k<cols_num;k++){
        temp=p[i][k];
    p[i][k]=p[j][k];
    p[j][k]=temp;					}
      }
}
if(flag)			return 0;
  }
}
for(int i=0;i<rows_num;i++){
        for(int j=i+1;j<rows_num;j++){
            		for(int k=i+1;k<cols_num;k++){
            		    	p[j][k]-=p[i][k]*(p[j][i]*p[i][i]);
	}
  }
}
for(int i=0;i<rows_num;i++){
            ans*=p[i][i];	}
for(int i=0;i<rows_num;i++){
            for(int j=0;j<cols_num;j++){
                	p[i][j]=back_up[i][j];		}	}
return ans;}
