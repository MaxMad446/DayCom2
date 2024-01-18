// Auto-generated module | 2026-05-14T18:18:32.877610
#include <iostream>
#include <vector>

int compute_806() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
