// Auto-generated module | 2026-05-12T21:01:53.405340
#include <iostream>
#include <vector>

int compute_863() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
