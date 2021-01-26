// Auto-generated module | 2026-05-12T21:32:48.171958
#include <iostream>
#include <vector>

int compute_521() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
