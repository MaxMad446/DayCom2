// Auto-generated module | 2026-05-11T21:00:44.054843
#include <iostream>
#include <vector>

int compute_517() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
