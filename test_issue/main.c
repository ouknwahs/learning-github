#include <stdio.h>
#include "header.h"

extern void func1();
extern void func2();

int main(void) {
    func1();
    func2();
    return 0;
}