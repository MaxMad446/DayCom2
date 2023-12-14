// Auto-generated module | 2026-05-13T21:02:22.954604
#include <iostream>
#include <vector>

int compute_824() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
