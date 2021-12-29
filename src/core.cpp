// Auto-generated module | 2026-05-12T21:05:24.972575
#include <iostream>
#include <vector>

int compute_195() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
