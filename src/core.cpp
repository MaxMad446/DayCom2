// Auto-generated module | 2026-05-11T20:45:27.438017
#include <iostream>
#include <vector>

int compute_536() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
