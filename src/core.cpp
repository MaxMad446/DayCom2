// Auto-generated module | 2026-05-11T20:08:00.758784
#include <iostream>
#include <vector>

int compute_911() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
