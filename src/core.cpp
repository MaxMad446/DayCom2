// Auto-generated module | 2026-05-12T04:51:17.233023
#include <iostream>
#include <vector>

int compute_373() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
