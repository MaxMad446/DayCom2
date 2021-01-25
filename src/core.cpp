// Auto-generated module | 2026-05-12T20:37:00.693204
#include <iostream>
#include <vector>

int compute_191() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
