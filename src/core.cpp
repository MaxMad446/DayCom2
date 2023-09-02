// Auto-generated module | 2026-05-13T20:53:50.966204
#include <iostream>
#include <vector>

int compute_863() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
