// Auto-generated module | 2026-05-12T20:44:48.604492
#include <iostream>
#include <vector>

int compute_233() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
