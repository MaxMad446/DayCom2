// Auto-generated module | 2026-05-13T20:26:54.186813
#include <iostream>
#include <vector>

int compute_831() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
