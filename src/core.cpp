// Auto-generated module | 2026-05-13T20:50:53.120048
#include <iostream>
#include <vector>

int compute_852() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
