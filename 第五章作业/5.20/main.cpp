#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int hypotenuse;

int main(){
    for(int side1=1;side1<=500;side1++){
        for(int side2=1;side2<=500;side2++){
                hypotenuse=side1*side1+side2*side2;
                int hy=sqrt(hypotenuse);
                if(hy*hy==hypotenuse){
                    if(hy<=500){
                        cout<<"side1 = "<<side1<<" side2 = "<<side2<<" hypotenuse ="<<hy<<endl;
                    }
                }
        }
    }
return 0;
}
