// Auto-generated module | 2026-05-13T20:27:11.119453
#include <iostream>
#include <vector>

int compute_419() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
