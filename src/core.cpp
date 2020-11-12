// Auto-generated module | 2026-05-14T18:05:48.654319
#include <iostream>
#include <vector>

int compute_712() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
