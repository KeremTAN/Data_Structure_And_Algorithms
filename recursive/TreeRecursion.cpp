#include<iostream>

int treeRecurisve(int n){
    if(n > 0){
        std::cout<<n<<" ";
        treeRecurisve(n-1);
        treeRecurisve(n-1);     
    }
}

int main(){
    treeRecurisve(3);
    std::cin.get();
}