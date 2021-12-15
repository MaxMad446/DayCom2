// Auto-generated module | 2026-05-11T20:43:09.164584
#include <iostream>
#include <vector>

int compute_123() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
