#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;
int n,num;
int main(){
    num=0;
    while(num<5){
        cin>>n;
        if(n>30||n<1){
            continue;
        }
        num++;
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
return 0;
}
