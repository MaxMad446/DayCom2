// Auto-generated module | 2026-05-12T20:37:08.678771
#include <iostream>
#include <vector>

int compute_127() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
