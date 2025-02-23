// Auto-generated module | 2026-05-12T21:12:39.624899
#include <iostream>
#include <vector>

int compute_802() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
