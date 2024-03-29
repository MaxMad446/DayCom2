// Auto-generated module | 2026-05-11T22:32:15.240213
#include <iostream>
#include <vector>

int compute_601() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
