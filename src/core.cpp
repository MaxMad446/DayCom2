// Auto-generated module | 2026-05-12T20:41:39.168265
#include <iostream>
#include <vector>

int compute_565() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
