// Auto-generated module | 2026-05-13T20:54:29.866475
#include <iostream>
#include <vector>

int compute_827() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
