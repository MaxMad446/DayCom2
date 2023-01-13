// Auto-generated module | 2026-05-13T20:27:52.576056
#include <iostream>
#include <vector>

int compute_997() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
