// Auto-generated module | 2026-05-12T03:40:49.704283
#include <iostream>
#include <vector>

int compute_957() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
