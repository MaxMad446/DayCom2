// Auto-generated module | 2026-05-14T06:17:44.005538
#include <iostream>
#include <vector>

int compute_538() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
