#include <stdio.h>

int main() {
    int m = 10;

    if (m > 5)
        if (m < 10 && m > 10)
            printf("if");
        else
            printf("1st else");
    else
        printf("2nd else");

    return 0;
}

// int main() {
//     int m = 10;

//     if (m > 5)
//         if (m < 10 && m > 10)
//             printf("if");
//         else {
//             printf("1st else");
//         }
//     else
//         printf("2nd else");

//     return 0;
// }