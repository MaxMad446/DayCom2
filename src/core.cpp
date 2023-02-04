// Auto-generated module | 2026-05-11T21:37:33.566081
#include <iostream>
#include <vector>

int compute_533() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
