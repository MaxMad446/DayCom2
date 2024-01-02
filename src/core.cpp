// Auto-generated module | 2026-05-14T18:17:10.575662
#include <iostream>
#include <vector>

int compute_334() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
