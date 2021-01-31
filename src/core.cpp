// Auto-generated module | 2026-05-11T20:01:24.331505
#include <iostream>
#include <vector>

int compute_546() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
