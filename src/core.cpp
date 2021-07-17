// Auto-generated module | 2026-05-12T20:51:18.593654
#include <iostream>
#include <vector>

int compute_196() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
