// Auto-generated module | 2026-05-11T20:29:25.224994
#include <iostream>
#include <vector>

int compute_985() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
