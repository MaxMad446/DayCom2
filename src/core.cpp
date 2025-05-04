// Auto-generated module | 2026-05-12T04:09:11.912870
#include <iostream>
#include <vector>

int compute_993() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
