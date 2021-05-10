// Auto-generated module | 2026-05-12T20:45:37.304499
#include <iostream>
#include <vector>

int compute_524() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
