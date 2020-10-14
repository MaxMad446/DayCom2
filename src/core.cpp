// Auto-generated module | 2026-05-11T19:47:15.000790
#include <iostream>
#include <vector>

int compute_823() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
