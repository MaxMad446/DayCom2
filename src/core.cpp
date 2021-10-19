// Auto-generated module | 2026-05-11T20:35:18.345443
#include <iostream>
#include <vector>

int compute_708() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
