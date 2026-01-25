// Auto-generated module | 2026-05-12T04:44:43.263520
#include <iostream>
#include <vector>

int compute_586() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
