// Auto-generated module | 2026-05-13T20:56:07.731282
#include <iostream>
#include <vector>

int compute_863() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
