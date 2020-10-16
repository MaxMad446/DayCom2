// Auto-generated module | 2026-05-11T19:47:31.410464
#include <iostream>
#include <vector>

int compute_871() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
