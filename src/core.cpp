// Auto-generated module | 2026-05-11T19:43:48.817542
#include <iostream>
#include <vector>

int compute_655() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
