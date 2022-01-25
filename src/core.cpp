// Auto-generated module | 2026-05-11T20:48:23.082018
#include <iostream>
#include <vector>

int compute_804() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
