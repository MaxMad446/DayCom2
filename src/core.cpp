// Auto-generated module | 2026-05-12T21:11:33.943655
#include <iostream>
#include <vector>

int compute_521() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
