#include <stdio.h>
#include "header.h"

extern func1();
extern func2();

int main(void) {
    func1();
    func2();
    return 0;
}