// Auto-generated module | 2026-05-12T20:37:45.704011
#include <iostream>
#include <vector>

int compute_977() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
