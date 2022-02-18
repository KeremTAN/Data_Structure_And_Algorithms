#include<iostream>

int headRecurisve(int n){
    if(n > 0){
        // 5+headRecurisve(n-1) vb. not head; 
        headRecurisve(n-1);
        std::cout<<n<<" ";
    }
}

int main(){
    headRecurisve(5);
    std::cin.get();
}