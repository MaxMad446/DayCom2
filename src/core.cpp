// Auto-generated module | 2026-05-12T04:22:05.923103
#include <iostream>
#include <vector>

int compute_654() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
