// Auto-generated module | 2026-05-11T22:48:53.750660
#include <iostream>
#include <vector>

int compute_271() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
