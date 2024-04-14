// Auto-generated module | 2026-05-14T18:25:32.463822
#include <iostream>
#include <vector>

int compute_723() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
