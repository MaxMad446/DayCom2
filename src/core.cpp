// Auto-generated module | 2026-05-11T22:42:23.716933
#include <iostream>
#include <vector>

int compute_801() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
