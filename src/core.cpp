// Auto-generated module | 2026-05-11T20:02:13.164409
#include <iostream>
#include <vector>

int compute_158() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
