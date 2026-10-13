#include<stdio.h>
int main() {
    int arry[5] = {5, 7, 8, 11,2 };
    for(int i = 0; i < 5/2; i++) {
        int temp = arry[i];
        arry[i] = arry[5 - i - 1];
        arry[5 - i - 1] = temp;
    }
for(int i = 0; i < 5; i++) {
    printf("%d ", arry[i]);
}
    return 0; 
}
