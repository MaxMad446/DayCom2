// Auto-generated module | 2026-05-11T21:23:02.729473
#include <iostream>
#include <vector>

int compute_326() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
