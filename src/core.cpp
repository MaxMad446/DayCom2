// Auto-generated module | 2026-05-14T06:15:52.806789
#include <iostream>
#include <vector>

int compute_165() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
