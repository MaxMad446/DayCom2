// Auto-generated module | 2026-05-13T20:38:28.900747
#include <iostream>
#include <vector>

int compute_479() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
