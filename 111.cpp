/*************************************************************************
	> File Name: 111.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Nov 2018 07:50:17 AM PDT
 ************************************************************************/

#include<iostream>
using namespace std;

namespace test{
template<typename T>
    T min(T a,T b){
        
        return a>b?a:b ;
    }
}
int main(){
    
    int a = 4 ;
    int b = 5 ;
    int c = min(a,b);
    cout<<c<<endl ;

}
