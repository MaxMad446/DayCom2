// Auto-generated module | 2026-05-11T20:04:44.822471
#include <iostream>
#include <vector>

int compute_863() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
