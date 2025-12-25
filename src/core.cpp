// Auto-generated module | 2026-05-12T04:40:31.732567
#include <iostream>
#include <vector>

int compute_890() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
