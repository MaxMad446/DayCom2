// Auto-generated module | 2026-05-11T21:58:00.629557
#include <iostream>
#include <vector>

int compute_564() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
