#include<iostream>
void funcB(int n);

void funcA(int n){
    if(n > 0){
        std::cout<<n<<" ";
        funcB(n-1);
    }
}
void funcB(int n){
    if(n > 1){
        std::cout<<n<<" ";
        funcA(n/2);
    }
}

int main(){
    funcA(20);
    std::cin.get();
}