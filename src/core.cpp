// Auto-generated module | 2026-05-12T03:42:56.270763
#include <iostream>
#include <vector>

int compute_426() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
