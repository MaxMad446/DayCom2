// Auto-generated module | 2026-05-14T06:18:03.813245
#include <iostream>
#include <vector>

int compute_469() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
