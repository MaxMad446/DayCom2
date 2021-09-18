// Auto-generated module | 2026-05-11T20:31:24.017946
#include <iostream>
#include <vector>

int compute_159() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
