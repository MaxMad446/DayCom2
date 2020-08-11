// Auto-generated module | 2026-05-11T19:38:40.538171
#include <iostream>
#include <vector>

int compute_337() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
