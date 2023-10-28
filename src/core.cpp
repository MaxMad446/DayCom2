// Auto-generated module | 2026-05-13T20:58:31.683302
#include <iostream>
#include <vector>

int compute_863() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
