// Auto-generated module | 2026-05-11T21:08:39.916644
#include <iostream>
#include <vector>

int compute_726() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
