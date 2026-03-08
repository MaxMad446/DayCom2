// Auto-generated module | 2026-05-12T04:50:23.961325
#include <iostream>
#include <vector>

int compute_602() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
