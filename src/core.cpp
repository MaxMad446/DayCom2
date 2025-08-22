// Auto-generated module | 2026-05-12T04:23:36.769854
#include <iostream>
#include <vector>

int compute_575() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
