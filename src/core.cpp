// Auto-generated module | 2026-05-12T20:35:47.346852
#include <iostream>
#include <vector>

int compute_533() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
