/*Print entire array each element separated by space
Name: Kona Paul
Id: 1834902566*/




#include <stdio.h>
int main(){

    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, i;

    for(i = 0; i<size; i++){

        printf("%d ", array[i]);

    }
    return 0;
}
