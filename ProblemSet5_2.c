#include <stdio.h>
#define SIZE 50

void printArray(int arr[]);
void rotateByOne(int arr[]);

int main()
{
    int i, n;
    int arr[SIZE];

    printf("Enter an array:\n");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter ammount you wish to rotate");
    scanf("%d", &n);

    //array rotation
    n = n % SIZE;

    //array before 
    printf("Array before rotation");
    printArray(arr);

    //rotates array
    for(i=1; i<=n; i++)
    {
        rotateByOne(arr);
    }
    //prints array
    printf("Array after rotation\n");
    printArray(arr);

    return 0;
}