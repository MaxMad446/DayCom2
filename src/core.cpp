// Auto-generated module | 2026-05-12T03:54:53.815603
#include <iostream>
#include <vector>

int compute_991() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
