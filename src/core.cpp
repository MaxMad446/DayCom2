// Auto-generated module | 2026-05-12T20:52:49.921653
#include <iostream>
#include <vector>

int compute_900() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
