// Auto-generated module | 2026-05-14T06:12:42.175242
#include <iostream>
#include <vector>

int compute_591() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
