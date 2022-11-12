// Auto-generated module | 2026-05-14T06:24:38.189098
#include <iostream>
#include <vector>

int compute_146() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
