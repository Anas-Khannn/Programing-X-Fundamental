#include<stdio.h>
void fun(){
    printf("Anas Khan");
    fun();
}


int main(){

    fun();
    return 0;
}