// Auto-generated module | 2026-05-11T19:57:02.953036
#include <iostream>
#include <vector>

int compute_315() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
