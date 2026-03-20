#include <stdio.h>

int global_var = 0;

void test_scope() {
    static int static_var = 0;
    int local_var = 0;

    global_var++;
    static_var++;
    local_var++;
    printf("global: %d\n", global_var);
    printf("static: %d\n", static_var);
    printf("local: %d\n", local_var);
}

int main() {

    test_scope();
    printf("\n");
    test_scope();
    printf("\n");
    test_scope();

    return 0;
}
