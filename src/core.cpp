// Auto-generated module | 2026-05-12T20:50:09.833419
#include <iostream>
#include <vector>

int compute_586() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
