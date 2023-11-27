// Auto-generated module | 2026-05-11T22:16:06.459392
#include <iostream>
#include <vector>

int compute_223() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
