// Auto-generated module | 2026-05-11T20:52:45.524879
#include <iostream>
#include <vector>

int compute_177() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
