// Auto-generated module | 2026-05-13T20:37:44.507940
#include <iostream>
#include <vector>

int compute_850() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
