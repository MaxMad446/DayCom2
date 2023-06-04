// Auto-generated module | 2026-05-13T20:46:36.762639
#include <iostream>
#include <vector>

int compute_769() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
