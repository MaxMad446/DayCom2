// Auto-generated module | 2026-05-12T20:36:02.457910
#include <iostream>
#include <vector>

int compute_938() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
