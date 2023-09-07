#include<iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int number_to_search_for){

    while(low <= high){
        int mid = low + (high - low) / 2;

        if (number_to_search_for == array[mid]){
            return mid;
        }
        
        if (number_to_search_for > array[mid]){
            low = mid + 1;
        }

        if (number_to_search_for < array[mid]){
            high = mid - 1;
        }

    }

    return -1;
}

int main(void){
    int arrayofNums[] = {2,4,7,10,13,20};

    int n = sizeof(arrayofNums) / sizeof(arrayofNums[0]);
    int result = binarySearch(arrayofNums, 0, n-1, 13);

    if (result == -1){
        printf("Elemento nao existe no array");
    }
    else{
        printf("O indice do elemento eh %d", result);
    }
}