#include<stdio.h>

int main() {
    int arr[] = {5,1,3,6,4,7,2};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        int smaller = arr[i];
        int smaller_n_index = i;
        for(int j = i; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if(smaller > arr[j])
            {
                smaller_n_index = j;
                smaller = arr[j];
            }
        }
        arr[smaller_n_index] = arr[i];
        arr[i] = smaller;
    }
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d\n", arr[i]);
    return 0;
}
