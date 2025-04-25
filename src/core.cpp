// Auto-generated module | 2026-05-12T04:07:54.120557
#include <iostream>
#include <vector>

int compute_468() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
