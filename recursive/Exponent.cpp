#include<iostream>
static int counter1 = 0,counter2=0;
int powON(int m, int n){
    if(n == 0){ 
        return 1;
    }   
    counter1++;
    return powON(m,n-1)*m;

}
int powLOGN(int m, int n){   
    if(n==0){
        return 1;
    }
    counter2++;
    if(n%2==0){
        return powLOGN(m*m,n/2);
    }
    else{
        return m*powLOGN(m*m,(n-1)/2);
    }
}

int main(){
    powON(1,4095);
    std::cout << "powON Time Complexity: " << counter1 << std::endl;
    powLOGN(1,4095);
    std::cout << "powLOGN Time Complexity : " << counter2 << std::endl;

    std::cin.get();
}