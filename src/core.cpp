// Auto-generated module | 2026-05-12T20:40:02.288481
#include <iostream>
#include <vector>

int compute_348() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
