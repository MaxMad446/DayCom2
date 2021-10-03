// Auto-generated module | 2026-05-12T20:58:11.234948
#include <iostream>
#include <vector>

int compute_923() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
