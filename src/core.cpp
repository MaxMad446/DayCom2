// Auto-generated module | 2026-05-12T21:11:19.120852
#include <iostream>
#include <vector>

int compute_218() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
