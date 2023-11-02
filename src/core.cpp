// Auto-generated module | 2026-05-11T22:12:56.767784
#include <iostream>
#include <vector>

int compute_385() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
