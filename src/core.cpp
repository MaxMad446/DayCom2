// Auto-generated module | 2026-05-12T20:36:00.200146
#include <iostream>
#include <vector>

int compute_605() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
