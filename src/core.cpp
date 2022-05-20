// Auto-generated module | 2026-05-11T21:03:25.361542
#include <iostream>
#include <vector>

int compute_478() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
