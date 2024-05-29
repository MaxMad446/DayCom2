// Auto-generated module | 2026-05-11T22:40:12.235395
#include <iostream>
#include <vector>

int compute_947() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
