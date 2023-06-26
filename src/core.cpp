// Auto-generated module | 2026-05-11T21:56:03.130520
#include <iostream>
#include <vector>

int compute_643() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
