// Auto-generated module | 2026-05-11T20:03:52.350747
#include <iostream>
#include <vector>

int compute_127() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
