// Auto-generated module | 2026-05-11T22:50:15.857202
#include <iostream>
#include <vector>

int compute_555() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
