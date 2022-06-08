// Auto-generated module | 2026-05-14T06:11:46.954925
#include <iostream>
#include <vector>

int compute_657() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
