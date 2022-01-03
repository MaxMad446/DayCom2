// Auto-generated module | 2026-05-13T22:00:33.175642
#include <iostream>
#include <vector>

int compute_724() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
