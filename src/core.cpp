// Auto-generated module | 2026-05-12T04:46:35.387531
#include <iostream>
#include <vector>

int compute_526() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
