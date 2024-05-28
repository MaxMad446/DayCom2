// Auto-generated module | 2026-05-14T18:29:02.220972
#include <iostream>
#include <vector>

int compute_915() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_915() << std::endl;
    return 0;
}
