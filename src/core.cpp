// Auto-generated module | 2026-05-12T21:12:12.991686
#include <iostream>
#include <vector>

int compute_863() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
