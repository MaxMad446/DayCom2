// Auto-generated module | 2026-05-13T20:56:49.356989
#include <iostream>
#include <vector>

int compute_408() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
