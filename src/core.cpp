// Auto-generated module | 2026-05-11T19:56:10.327441
#include <iostream>
#include <vector>

int compute_688() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
