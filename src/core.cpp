// Auto-generated module | 2026-05-11T20:04:47.234045
#include <iostream>
#include <vector>

int compute_232() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
