// Auto-generated module | 2026-05-14T06:15:22.495027
#include <iostream>
#include <vector>

int compute_346() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
