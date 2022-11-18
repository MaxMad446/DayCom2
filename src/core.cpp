// Auto-generated module | 2026-05-11T21:27:24.238233
#include <iostream>
#include <vector>

int compute_651() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
