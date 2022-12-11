// Auto-generated module | 2026-05-11T21:30:27.514565
#include <iostream>
#include <vector>

int compute_863() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
