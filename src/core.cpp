// Auto-generated module | 2026-05-12T21:33:19.724496
#include <iostream>
#include <vector>

int compute_792() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
