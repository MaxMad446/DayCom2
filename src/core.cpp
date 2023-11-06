// Auto-generated module | 2026-05-13T20:59:18.316523
#include <iostream>
#include <vector>

int compute_285() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
