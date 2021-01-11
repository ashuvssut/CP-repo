#include <stdlib.h>
#include <string.h>
// #include <iostream>

using namespace std;
int main() {
    char extension[10] = "exe", cmd[50] = "del /s *.";
    // cin<<extension;
    strcat(cmd, extension);
    system(cmd);
    return 0;
}


//other Command :- find . -name "*.exe" -type f -delete