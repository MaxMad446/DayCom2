// Auto-generated module | 2026-05-12T21:04:52.557387
#include <iostream>
#include <vector>

int compute_542() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
