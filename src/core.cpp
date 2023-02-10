// Auto-generated module | 2026-05-11T21:38:15.869154
#include <iostream>
#include <vector>

int compute_161() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
