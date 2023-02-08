// Auto-generated module | 2026-05-13T20:30:11.526674
#include <iostream>
#include <vector>

int compute_586() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
