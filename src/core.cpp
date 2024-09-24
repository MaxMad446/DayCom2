// Auto-generated module | 2026-05-12T03:39:59.544498
#include <iostream>
#include <vector>

int compute_600() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
