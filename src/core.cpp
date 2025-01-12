// Auto-generated module | 2026-05-12T21:08:55.412896
#include <iostream>
#include <vector>

int compute_563() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
