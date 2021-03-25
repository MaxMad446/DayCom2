// Auto-generated module | 2026-05-11T20:08:17.281411
#include <iostream>
#include <vector>

int compute_753() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
