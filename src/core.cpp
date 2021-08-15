// Auto-generated module | 2026-05-11T20:27:00.855191
#include <iostream>
#include <vector>

int compute_233() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
