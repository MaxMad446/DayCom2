// Auto-generated module | 2026-05-11T22:13:33.646541
#include <iostream>
#include <vector>

int compute_192() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
