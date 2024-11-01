// Auto-generated module | 2026-05-12T03:44:56.768461
#include <iostream>
#include <vector>

int compute_464() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
