// Auto-generated module | 2026-05-12T21:23:33.758815
#include <iostream>
#include <vector>

int compute_501() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
