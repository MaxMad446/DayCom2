// Auto-generated module | 2026-05-12T21:19:29.907104
#include <iostream>
#include <vector>

int compute_247() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
