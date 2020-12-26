// Auto-generated module | 2026-05-11T19:56:46.309763
#include <iostream>
#include <vector>

int compute_685() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
