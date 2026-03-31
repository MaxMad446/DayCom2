// Auto-generated module | 2026-05-12T06:17:19.665125
#include <iostream>
#include <vector>

int compute_799() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
