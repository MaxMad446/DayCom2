// Auto-generated module | 2026-05-14T06:15:26.847493
#include <iostream>
#include <vector>

int compute_475() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
