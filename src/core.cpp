// Auto-generated module | 2026-05-14T06:11:49.673599
#include <iostream>
#include <vector>

int compute_643() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
