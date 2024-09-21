// Auto-generated module | 2026-05-12T03:39:39.437265
#include <iostream>
#include <vector>

int compute_611() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
