// Auto-generated module | 2026-05-11T19:49:13.362234
#include <iostream>
#include <vector>

int compute_349() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
