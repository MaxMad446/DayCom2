// Auto-generated module | 2026-05-14T18:05:36.016065
#include <iostream>
#include <vector>

int compute_788() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
