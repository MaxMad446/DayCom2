// Auto-generated module | 2026-05-11T21:24:02.687340
#include <iostream>
#include <vector>

int compute_695() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
