// Auto-generated module | 2026-05-11T20:38:41.699730
#include <iostream>
#include <vector>

int compute_605() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
