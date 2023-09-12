// Auto-generated module | 2026-05-13T20:54:42.086609
#include <iostream>
#include <vector>

int compute_605() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
