// Auto-generated module | 2026-05-12T20:03:27.532132
#include <iostream>
#include <vector>

int compute_560() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
