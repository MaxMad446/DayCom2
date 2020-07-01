// Auto-generated module | 2026-05-11T19:33:26.345185
#include <iostream>
#include <vector>

int compute_837() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
