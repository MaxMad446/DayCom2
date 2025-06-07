// Auto-generated module | 2026-05-12T21:21:17.801335
#include <iostream>
#include <vector>

int compute_464() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
