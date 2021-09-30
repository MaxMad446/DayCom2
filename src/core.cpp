// Auto-generated module | 2026-05-11T20:32:45.405969
#include <iostream>
#include <vector>

int compute_999() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
