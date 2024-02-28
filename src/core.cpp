// Auto-generated module | 2026-05-14T18:21:55.857770
#include <iostream>
#include <vector>

int compute_811() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
