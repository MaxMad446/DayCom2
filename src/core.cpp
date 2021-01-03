// Auto-generated module | 2026-05-12T21:30:59.095142
#include <iostream>
#include <vector>

int compute_863() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
