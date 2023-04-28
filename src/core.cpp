// Auto-generated module | 2026-05-13T20:36:48.778918
#include <iostream>
#include <vector>

int compute_776() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
