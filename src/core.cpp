// Auto-generated module | 2026-05-13T22:13:06.546672
#include <iostream>
#include <vector>

int compute_313() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
