// Auto-generated module | 2026-05-12T03:53:59.441096
#include <iostream>
#include <vector>

int compute_906() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
