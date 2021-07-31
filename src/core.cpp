// Auto-generated module | 2026-05-12T20:52:22.557743
#include <iostream>
#include <vector>

int compute_450() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
