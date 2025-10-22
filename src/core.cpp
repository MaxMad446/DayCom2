// Auto-generated module | 2026-05-12T04:31:55.055546
#include <iostream>
#include <vector>

int compute_619() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
