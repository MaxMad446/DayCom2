// Auto-generated module | 2026-05-11T20:58:40.064326
#include <iostream>
#include <vector>

int compute_913() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
