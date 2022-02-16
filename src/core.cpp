// Auto-generated module | 2026-05-11T20:51:18.352053
#include <iostream>
#include <vector>

int compute_726() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
