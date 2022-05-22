// Auto-generated module | 2026-05-13T22:12:28.658793
#include <iostream>
#include <vector>

int compute_861() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
