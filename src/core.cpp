// Auto-generated module | 2026-05-12T04:14:43.270093
#include <iostream>
#include <vector>

int compute_747() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
