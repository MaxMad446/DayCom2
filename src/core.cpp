// Auto-generated module | 2026-05-12T03:58:09.440873
#include <iostream>
#include <vector>

int compute_134() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
