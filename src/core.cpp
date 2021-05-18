// Auto-generated module | 2026-05-12T20:46:16.623054
#include <iostream>
#include <vector>

int compute_284() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
