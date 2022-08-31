// Auto-generated module | 2026-05-11T21:17:10.876470
#include <iostream>
#include <vector>

int compute_663() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
