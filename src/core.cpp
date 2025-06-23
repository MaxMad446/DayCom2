// Auto-generated module | 2026-05-12T21:22:45.769724
#include <iostream>
#include <vector>

int compute_231() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
