// Auto-generated module | 2026-05-11T22:30:33.516173
#include <iostream>
#include <vector>

int compute_281() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
