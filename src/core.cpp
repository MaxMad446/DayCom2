// Auto-generated module | 2026-05-12T03:56:48.685112
#include <iostream>
#include <vector>

int compute_743() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
