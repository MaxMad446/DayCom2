// Auto-generated module | 2026-05-14T18:29:05.396093
#include <iostream>
#include <vector>

int compute_456() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
