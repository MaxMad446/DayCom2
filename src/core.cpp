// Auto-generated module | 2026-05-12T20:55:21.779323
#include <iostream>
#include <vector>

int compute_706() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
