// Auto-generated module | 2026-05-13T22:07:53.120670
#include <iostream>
#include <vector>

int compute_326() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
