#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
int n,num;
int main(){
    num=0;
    while(num<5){
        cin>>n;
        if(n>=1&&n<=30){
            num++;
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<""<<endl;
        }
    }
return 0;
}
