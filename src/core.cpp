// Auto-generated module | 2026-05-12T20:48:21.404599
#include <iostream>
#include <vector>

int compute_541() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
