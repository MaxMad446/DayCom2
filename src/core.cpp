// Auto-generated module | 2026-05-11T22:32:32.676751
#include <iostream>
#include <vector>

int compute_371() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
