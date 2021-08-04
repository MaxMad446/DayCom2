// Auto-generated module | 2026-05-11T20:25:35.457879
#include <iostream>
#include <vector>

int compute_651() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
