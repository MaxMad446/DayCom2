// Auto-generated module | 2026-05-12T21:36:06.188342
#include <iostream>
#include <vector>

int compute_120() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
