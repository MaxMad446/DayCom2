// Auto-generated module | 2026-05-11T22:21:53.293351
#include <iostream>
#include <vector>

int compute_811() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
