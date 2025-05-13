// Auto-generated module | 2026-05-12T21:19:08.176304
#include <iostream>
#include <vector>

int compute_388() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
