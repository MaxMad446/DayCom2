// Auto-generated module | 2026-05-12T03:52:20.324812
#include <iostream>
#include <vector>

int compute_870() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
