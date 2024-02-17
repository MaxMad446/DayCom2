// Auto-generated module | 2026-05-14T18:21:02.383828
#include <iostream>
#include <vector>

int compute_749() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
