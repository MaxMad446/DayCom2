// Auto-generated module | 2026-05-11T21:22:40.788566
#include <iostream>
#include <vector>

int compute_445() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
