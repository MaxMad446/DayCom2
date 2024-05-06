// Auto-generated module | 2026-05-11T22:37:13.403111
#include <iostream>
#include <vector>

int compute_582() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
