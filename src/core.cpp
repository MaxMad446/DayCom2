// Auto-generated module | 2026-05-11T20:14:21.406787
#include <iostream>
#include <vector>

int compute_882() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
