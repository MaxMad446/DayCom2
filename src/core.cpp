// Auto-generated module | 2026-05-11T22:26:21.393994
#include <iostream>
#include <vector>

int compute_188() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
