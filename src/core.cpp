// Auto-generated module | 2026-05-12T21:31:55.014145
#include <iostream>
#include <vector>

int compute_337() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
