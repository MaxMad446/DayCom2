// Auto-generated module | 2026-05-11T20:40:24.356512
#include <iostream>
#include <vector>

int compute_536() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
