// Auto-generated module | 2026-05-12T04:38:38.186461
#include <iostream>
#include <vector>

int compute_730() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
