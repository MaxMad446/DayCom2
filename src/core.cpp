// Auto-generated module | 2026-05-11T20:10:59.743322
#include <iostream>
#include <vector>

int compute_911() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
