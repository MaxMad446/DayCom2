// Auto-generated module | 2026-05-13T22:00:54.151725
#include <iostream>
#include <vector>

int compute_812() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
