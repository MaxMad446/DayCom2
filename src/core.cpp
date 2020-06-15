// Auto-generated module | 2026-05-11T19:31:17.295849
#include <iostream>
#include <vector>

int compute_489() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
