// Auto-generated module | 2026-05-13T20:58:14.147945
#include <iostream>
#include <vector>

int compute_337() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
