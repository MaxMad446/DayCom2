// Auto-generated module | 2026-05-13T20:32:13.440242
#include <iostream>
#include <vector>

int compute_379() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
