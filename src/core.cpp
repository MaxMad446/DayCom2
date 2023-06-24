// Auto-generated module | 2026-05-13T20:48:10.530480
#include <iostream>
#include <vector>

int compute_802() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
