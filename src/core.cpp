// Auto-generated module | 2026-05-11T20:01:20.269915
#include <iostream>
#include <vector>

int compute_685() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
