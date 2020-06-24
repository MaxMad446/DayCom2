// Auto-generated module | 2026-05-11T19:32:32.876002
#include <iostream>
#include <vector>

int compute_930() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
