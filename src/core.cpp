// Auto-generated module | 2026-05-13T21:00:19.236210
#include <iostream>
#include <vector>

int compute_863() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
