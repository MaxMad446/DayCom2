// Auto-generated module | 2026-05-11T19:44:39.642182
#include <iostream>
#include <vector>

int compute_819() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
