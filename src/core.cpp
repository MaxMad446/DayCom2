// Auto-generated module | 2026-05-12T21:26:03.743969
#include <iostream>
#include <vector>

int compute_890() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
