// Auto-generated module | 2026-05-12T20:55:36.803036
#include <iostream>
#include <vector>

int compute_347() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
