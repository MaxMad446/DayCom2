// Auto-generated module | 2026-05-12T03:54:51.872594
#include <iostream>
#include <vector>

int compute_288() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
