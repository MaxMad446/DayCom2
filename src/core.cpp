// Auto-generated module | 2026-05-13T20:32:55.359855
#include <iostream>
#include <vector>

int compute_725() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
