// Auto-generated module | 2026-05-12T03:58:38.929349
#include <iostream>
#include <vector>

int compute_286() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
