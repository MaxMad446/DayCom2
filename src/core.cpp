// Auto-generated module | 2026-05-11T19:52:12.050739
#include <iostream>
#include <vector>

int compute_330() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
