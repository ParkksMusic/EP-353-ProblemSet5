#include <stdio.h>

enum scale{
    Ionian, Dorian, Phrygian, Lydian, Mixolidian, Aeolian, Locrian
};
Ionian = {0, 2, 4, 5, 7, 9, 11, 12};
Dorian = {0, 2, 3, 5, 7, 9, 10, 12};
Phrigian = {0, 1, 3, 5, 7, 8, 10, 12};
Lydian = {0, 2, 4, 6, 7, 9, 11, 12};
Mixolydian = {0, 2, 4, 5, 7, 9, 10, 12};
Aeolian = {0, 2, 3, 5, 7, 8, 10, 12};
Locrian = {0, 1, 3, 5, 6, 8, 10, 12};
char input[15];


enum scale scale;
scale = input;

struct Scale {
    unsigned char rootNote;
    


    };
typedef struct Scale Scale;


int main(){

    char input[10];
    printf("What scale would you like to use:\n");
    scanf("%input[]", &input);

}