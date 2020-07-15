// Auto-generated module | 2026-05-11T19:35:07.691475
#include <iostream>
#include <vector>

int compute_189() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
