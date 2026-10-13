// ///without pointer
// #include <stdio.h>
// int main(){
//     int num=10;
//     printf("value of num:%d\n", num);
//     printf("address of num:%p\n",num);
// }

#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr;
    ptr = &num;        

    int a = 5;         

    printf("Pointer holds: %p\n", (void *)ptr);
    printf("Value of a: %d\n", a);
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value using pointer: %d\n", *ptr);
    printf("Address of pointer variable: %p\n", (void *)&ptr);

    return 0;
}