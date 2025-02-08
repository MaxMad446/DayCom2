// Auto-generated module | 2026-05-12T03:58:02.024811
#include <iostream>
#include <vector>

int compute_812() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
