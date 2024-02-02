// Auto-generated module | 2026-05-11T22:24:50.573654
#include <iostream>
#include <vector>

int compute_564() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
