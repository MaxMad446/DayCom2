// Auto-generated module | 2026-05-11T21:37:56.975918
#include <iostream>
#include <vector>

int compute_305() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
