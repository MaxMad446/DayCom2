// Auto-generated module | 2026-05-11T20:56:05.982223
#include <iostream>
#include <vector>

int compute_610() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
