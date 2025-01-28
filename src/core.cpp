// Auto-generated module | 2026-05-12T03:56:34.922720
#include <iostream>
#include <vector>

int compute_326() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
