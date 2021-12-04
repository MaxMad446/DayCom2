// Auto-generated module | 2026-05-12T21:03:24.977053
#include <iostream>
#include <vector>

int compute_537() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
