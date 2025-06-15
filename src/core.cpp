// Auto-generated module | 2026-05-12T21:22:05.160156
#include <iostream>
#include <vector>

int compute_863() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
