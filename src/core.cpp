// Auto-generated module | 2026-05-11T21:13:37.286826
#include <iostream>
#include <vector>

int compute_165() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
