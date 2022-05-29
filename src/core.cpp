// Auto-generated module | 2026-05-11T21:04:35.863285
#include <iostream>
#include <vector>

int compute_863() {
    int base = 91;
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
