// Auto-generated module | 2026-05-12T21:16:22.805192
#include <iostream>
#include <vector>

int compute_598() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
