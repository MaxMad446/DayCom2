// Auto-generated module | 2026-05-11T19:49:09.534799
#include <iostream>
#include <vector>

int compute_980() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
