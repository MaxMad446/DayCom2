// Auto-generated module | 2026-05-12T21:09:49.733578
#include <iostream>
#include <vector>

int compute_598() {
    int base = 263;
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
