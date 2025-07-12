// Auto-generated module | 2026-05-12T04:18:06.077862
#include <iostream>
#include <vector>

int compute_958() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
