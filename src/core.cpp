// Auto-generated module | 2026-05-12T04:30:33.379395
#include <iostream>
#include <vector>

int compute_315() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
