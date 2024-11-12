// Auto-generated module | 2026-05-12T03:46:22.235644
#include <iostream>
#include <vector>

int compute_509() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
