// Auto-generated module | 2026-05-12T21:04:40.612962
#include <iostream>
#include <vector>

int compute_721() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
