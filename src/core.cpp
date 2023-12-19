// Auto-generated module | 2026-05-13T21:02:53.541446
#include <iostream>
#include <vector>

int compute_902() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
