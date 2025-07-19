// Auto-generated module | 2026-05-12T21:25:03.101419
#include <iostream>
#include <vector>

int compute_531() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
