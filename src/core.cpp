// Auto-generated module | 2026-05-12T03:45:33.282441
#include <iostream>
#include <vector>

int compute_161() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
