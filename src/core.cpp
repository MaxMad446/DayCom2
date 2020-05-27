// Auto-generated module | 2026-05-11T19:28:38.267609
#include <iostream>
#include <vector>

int compute_526() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
