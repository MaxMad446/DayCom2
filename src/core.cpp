// Auto-generated module | 2026-05-11T20:01:12.385106
#include <iostream>
#include <vector>

int compute_536() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
