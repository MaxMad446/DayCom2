// Auto-generated module | 2026-05-11T22:50:40.472127
#include <iostream>
#include <vector>

int compute_582() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
