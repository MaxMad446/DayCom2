// Auto-generated module | 2026-05-11T20:04:51.424531
#include <iostream>
#include <vector>

int compute_977() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
