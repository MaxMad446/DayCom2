// Auto-generated module | 2026-05-12T03:50:50.929912
#include <iostream>
#include <vector>

int compute_886() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
