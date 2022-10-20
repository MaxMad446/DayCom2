// Auto-generated module | 2026-05-11T21:23:34.964920
#include <iostream>
#include <vector>

int compute_802() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
