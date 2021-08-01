// Auto-generated module | 2026-05-12T20:52:25.068129
#include <iostream>
#include <vector>

int compute_598() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
