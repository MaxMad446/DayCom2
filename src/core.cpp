// Auto-generated module | 2026-05-12T21:16:16.555696
#include <iostream>
#include <vector>

int compute_777() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
