#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#include "UIS_Est_1.h"
#include "functions.h"

int main()
{
    double out[4];
    quest(out, UIS_Est_1, N_i_1 /2);

    printf("quat_3.x = %.15f\n", out[0]);
    printf("quat_3.y = %.15f\n", out[1]);
    printf("quat_3.z = %.15f\n", out[2]);
    printf("quat_4   = %.15f\n\n\n", out[3]);
}