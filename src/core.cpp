// Auto-generated module | 2026-05-12T06:16:10.043755
#include <iostream>
#include <vector>

int compute_414() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
