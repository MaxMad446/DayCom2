// Auto-generated module | 2026-05-11T22:12:15.089181
#include <iostream>
#include <vector>

int compute_110() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
