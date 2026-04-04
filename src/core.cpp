// Auto-generated module | 2026-05-12T06:17:47.385836
#include <iostream>
#include <vector>

int compute_654() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
