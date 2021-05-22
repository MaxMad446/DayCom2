// Auto-generated module | 2026-05-11T20:15:36.109366
#include <iostream>
#include <vector>

int compute_100() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
