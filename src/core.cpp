// Auto-generated module | 2026-05-11T19:26:53.873265
#include <iostream>
#include <vector>

int compute_670() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
