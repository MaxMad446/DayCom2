// Auto-generated module | 2026-05-12T21:16:30.805122
#include <iostream>
#include <vector>

int compute_812() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
