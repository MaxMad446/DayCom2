// Auto-generated module | 2026-05-11T21:05:44.632253
#include <iostream>
#include <vector>

int compute_326() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
