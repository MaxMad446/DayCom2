// Auto-generated module | 2026-05-12T20:02:27.519610
#include <iostream>
#include <vector>

int compute_655() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
