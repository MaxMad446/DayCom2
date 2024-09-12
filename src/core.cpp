// Auto-generated module | 2026-05-12T03:38:36.249974
#include <iostream>
#include <vector>

int compute_303() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
