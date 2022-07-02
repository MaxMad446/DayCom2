// Auto-generated module | 2026-05-11T21:09:09.395836
#include <iostream>
#include <vector>

int compute_975() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
