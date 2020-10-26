// Auto-generated module | 2026-05-12T19:58:00.505098
#include <iostream>
#include <vector>

int compute_877() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
