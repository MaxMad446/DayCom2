// Auto-generated module | 2026-05-14T06:15:19.323041
#include <iostream>
#include <vector>

int compute_361() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
