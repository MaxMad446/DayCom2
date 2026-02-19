// Auto-generated module | 2026-05-12T04:48:08.144203
#include <iostream>
#include <vector>

int compute_673() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
