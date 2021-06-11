// Auto-generated module | 2026-05-12T20:48:23.675333
#include <iostream>
#include <vector>

int compute_877() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
