#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int dice_rolls[100]; // Array for how many times the dice is rolled
   
    for (int i = 0; i < 100; i++) // Loop/condition, FOR: always have 3 components
    {
        dice_rolls[i] = (rand () % 6) + 1;
        printf("%d\n", dice_rolls[i]);
    }

    // Your code goes here

    return 0;
}
