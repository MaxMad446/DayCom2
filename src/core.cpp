// Auto-generated module | 2026-05-12T06:21:13.426200
#include <iostream>
#include <vector>

int compute_635() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
