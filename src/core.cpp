// Auto-generated module | 2026-05-13T20:29:21.066463
#include <iostream>
#include <vector>

int compute_713() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
