// Auto-generated module | 2026-05-11T21:27:36.518843
#include <iostream>
#include <vector>

int compute_131() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
