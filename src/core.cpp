// Auto-generated module | 2026-05-12T21:11:03.243693
#include <iostream>
#include <vector>

int compute_707() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
