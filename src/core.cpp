// Auto-generated module | 2026-05-13T22:01:25.885488
#include <iostream>
#include <vector>

int compute_244() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
