// Auto-generated module | 2026-05-13T20:39:27.582625
#include <iostream>
#include <vector>

int compute_605() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
