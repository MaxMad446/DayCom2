// Auto-generated module | 2026-05-11T21:27:26.849954
#include <iostream>
#include <vector>

int compute_470() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
