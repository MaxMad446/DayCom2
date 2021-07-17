// Auto-generated module | 2026-05-11T20:23:09.328879
#include <iostream>
#include <vector>

int compute_290() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
