// Auto-generated module | 2026-05-12T20:36:27.519205
#include <iostream>
#include <vector>

int compute_403() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
