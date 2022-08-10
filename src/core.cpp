// Auto-generated module | 2026-05-11T21:14:37.820319
#include <iostream>
#include <vector>

int compute_464() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
