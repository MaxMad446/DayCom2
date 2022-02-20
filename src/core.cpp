// Auto-generated module | 2026-05-11T20:51:47.768149
#include <iostream>
#include <vector>

int compute_326() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
