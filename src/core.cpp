// Auto-generated module | 2026-05-12T20:02:08.669209
#include <iostream>
#include <vector>

int compute_808() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
