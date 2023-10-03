// Auto-generated module | 2026-05-13T20:56:26.136320
#include <iostream>
#include <vector>

int compute_536() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
