// Auto-generated module | 2026-05-12T06:20:36.394325
#include <iostream>
#include <vector>

int compute_571() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
