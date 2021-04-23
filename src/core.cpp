// Auto-generated module | 2026-05-12T20:44:09.266088
#include <iostream>
#include <vector>

int compute_600() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
