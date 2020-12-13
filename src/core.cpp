// Auto-generated module | 2026-05-14T18:10:00.348111
#include <iostream>
#include <vector>

int compute_540() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
