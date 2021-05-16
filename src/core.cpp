// Auto-generated module | 2026-05-11T20:14:44.770646
#include <iostream>
#include <vector>

int compute_985() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
