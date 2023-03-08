// Auto-generated module | 2026-05-13T20:32:30.784969
#include <iostream>
#include <vector>

int compute_118() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
