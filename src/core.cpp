// Auto-generated module | 2026-05-14T18:26:15.742278
#include <iostream>
#include <vector>

int compute_140() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
