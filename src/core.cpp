// Auto-generated module | 2026-05-12T04:17:24.232574
#include <iostream>
#include <vector>

int compute_966() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
