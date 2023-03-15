// Auto-generated module | 2026-05-13T20:33:07.968487
#include <iostream>
#include <vector>

int compute_871() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
