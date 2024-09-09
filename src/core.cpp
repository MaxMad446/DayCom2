// Auto-generated module | 2026-05-12T03:38:10.096098
#include <iostream>
#include <vector>

int compute_586() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
