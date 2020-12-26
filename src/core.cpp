// Auto-generated module | 2026-05-12T20:03:05.508848
#include <iostream>
#include <vector>

int compute_288() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
