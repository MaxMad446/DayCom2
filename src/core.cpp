// Auto-generated module | 2026-05-11T20:02:38.455275
#include <iostream>
#include <vector>

int compute_863() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
