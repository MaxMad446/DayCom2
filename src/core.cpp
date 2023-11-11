// Auto-generated module | 2026-05-13T20:59:42.830493
#include <iostream>
#include <vector>

int compute_711() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
