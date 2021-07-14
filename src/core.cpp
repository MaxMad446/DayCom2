// Auto-generated module | 2026-05-11T20:22:53.574696
#include <iostream>
#include <vector>

int compute_452() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
