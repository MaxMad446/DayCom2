// Auto-generated module | 2026-05-11T20:19:54.568459
#include <iostream>
#include <vector>

int compute_299() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
