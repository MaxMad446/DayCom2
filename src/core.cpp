// Auto-generated module | 2026-05-11T21:52:17.923314
#include <iostream>
#include <vector>

int compute_222() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
