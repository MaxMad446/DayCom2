// Auto-generated module | 2026-05-14T06:15:10.136436
#include <iostream>
#include <vector>

int compute_457() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
