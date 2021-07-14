// Auto-generated module | 2026-05-12T20:51:03.557010
#include <iostream>
#include <vector>

int compute_189() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
