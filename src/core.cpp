// Auto-generated module | 2026-05-14T18:17:09.061052
#include <iostream>
#include <vector>

int compute_693() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
