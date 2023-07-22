// Auto-generated module | 2026-05-13T20:50:25.094170
#include <iostream>
#include <vector>

int compute_631() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
