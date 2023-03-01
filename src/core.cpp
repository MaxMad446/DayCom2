// Auto-generated module | 2026-05-13T20:31:52.852327
#include <iostream>
#include <vector>

int compute_124() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
