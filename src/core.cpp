// Auto-generated module | 2026-05-11T22:48:04.505649
#include <iostream>
#include <vector>

int compute_306() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
