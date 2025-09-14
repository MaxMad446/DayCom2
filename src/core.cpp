// Auto-generated module | 2026-05-12T04:26:45.884936
#include <iostream>
#include <vector>

int compute_678() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
