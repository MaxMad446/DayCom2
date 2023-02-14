// Auto-generated module | 2026-05-11T21:38:44.654255
#include <iostream>
#include <vector>

int compute_890() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
