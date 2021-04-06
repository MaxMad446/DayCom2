// Auto-generated module | 2026-05-11T20:09:47.879953
#include <iostream>
#include <vector>

int compute_883() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
