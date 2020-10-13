// Auto-generated module | 2026-05-11T19:47:04.641330
#include <iostream>
#include <vector>

int compute_285() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
