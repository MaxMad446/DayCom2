// Auto-generated module | 2026-05-11T22:48:00.893240
#include <iostream>
#include <vector>

int compute_461() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
