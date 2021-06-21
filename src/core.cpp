// Auto-generated module | 2026-05-12T20:49:12.277841
#include <iostream>
#include <vector>

int compute_179() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
