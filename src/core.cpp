// Auto-generated module | 2026-05-11T20:01:32.916289
#include <iostream>
#include <vector>

int compute_974() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
