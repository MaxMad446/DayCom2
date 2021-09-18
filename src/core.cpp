// Auto-generated module | 2026-05-11T20:31:21.050395
#include <iostream>
#include <vector>

int compute_337() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
