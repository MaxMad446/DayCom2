// Auto-generated module | 2026-05-12T04:29:25.287450
#include <iostream>
#include <vector>

int compute_897() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
