// Auto-generated module | 2026-05-12T21:17:53.466067
#include <iostream>
#include <vector>

int compute_562() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
