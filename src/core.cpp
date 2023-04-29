// Auto-generated module | 2026-05-11T21:48:08.898269
#include <iostream>
#include <vector>

int compute_578() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
