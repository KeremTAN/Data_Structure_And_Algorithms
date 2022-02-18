#include<iostream>

void tailRecurisve(int n){
    if(n > 0){
        std::cout<<n<<" ";
        tailRecurisve(n-1);
        // tailRecurisve(n-1)+5 vb. not tail;
    }
}

int main(){
    tailRecurisve(5);
    std::cin.get();
}