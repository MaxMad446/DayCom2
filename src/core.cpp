// Auto-generated module | 2026-05-11T22:20:32.378459
#include <iostream>
#include <vector>

int compute_451() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
