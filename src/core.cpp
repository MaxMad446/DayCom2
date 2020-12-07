// Auto-generated module | 2026-05-12T20:01:24.733373
#include <iostream>
#include <vector>

int compute_562() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
