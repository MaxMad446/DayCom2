// Auto-generated module | 2026-05-11T22:10:00.871562
#include <iostream>
#include <vector>

int compute_232() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
