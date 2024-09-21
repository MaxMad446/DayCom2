// Auto-generated module | 2026-05-12T03:39:40.361351
#include <iostream>
#include <vector>

int compute_218() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
