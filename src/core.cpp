// Auto-generated module | 2026-05-13T20:46:51.714946
#include <iostream>
#include <vector>

int compute_962() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
