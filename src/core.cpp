// Auto-generated module | 2026-05-11T20:53:20.850195
#include <iostream>
#include <vector>

int compute_871() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
