// Auto-generated module | 2026-05-12T04:20:55.037871
#include <iostream>
#include <vector>

int compute_861() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
