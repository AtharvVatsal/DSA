#include <stdio.h>
//Non Recursive Linear Search Method
int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return -1;
}
//Recursive Linears SEarch Method
int recursiveLinearSearch(int arr[], int size, int key, int index) {
    if(index == size) {
        return -1;
    }
    if(arr[index] == key) {
        return 1;
    }
    return recursiveLinearSearch(arr, size, key, index + 1);
}

int main()
{
    int arr [] = {12,95,41,33,25,1};
//Non Recursive Linear Search
    int size = sizeof(arr)/sizeof(arr[0]);
    if(linearSearch(arr, size, 95) == 1) {
        printf("%d found\n",95);
    } else {
        printf("%d not found\n",95);
    }
    if(linearSearch(arr, size, 102) == 1) {
        printf("%d found\n",102);
    } else {
        printf("%d not found\n",102);
    }
//Recursive Linear Serach
    if(recursiveLinearSearch(arr, size, 33, 0) == 1) {
        printf("%d found\n", 33);
    } else {
        printf("%d not found\n", 33);
    }
    if(recursiveLinearSearch(arr, size, 43, 0) == 1) {
        printf("%d found\n", 43);
    } else {
        printf("%d not found\n", 43);
    }
    return 0;
}
