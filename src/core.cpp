// Auto-generated module | 2026-05-12T21:00:34.155016
#include <iostream>
#include <vector>

int compute_691() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
