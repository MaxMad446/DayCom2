// Auto-generated module | 2026-05-11T19:44:55.478753
#include <iostream>
#include <vector>

int compute_453() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
