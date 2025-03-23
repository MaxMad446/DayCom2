// Auto-generated module | 2026-05-12T04:03:34.016035
#include <iostream>
#include <vector>

int compute_802() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
