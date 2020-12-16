// Auto-generated module | 2026-05-11T19:55:32.311130
#include <iostream>
#include <vector>

int compute_390() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
