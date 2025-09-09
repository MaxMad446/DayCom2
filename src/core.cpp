// Auto-generated module | 2026-05-12T04:26:04.657765
#include <iostream>
#include <vector>

int compute_598() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
