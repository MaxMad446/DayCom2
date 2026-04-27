// Auto-generated module | 2026-05-12T06:20:59.359638
#include <iostream>
#include <vector>

int compute_385() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
