// Auto-generated module | 2026-05-12T04:27:13.814887
#include <iostream>
#include <vector>

int compute_482() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
