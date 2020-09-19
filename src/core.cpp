// Auto-generated module | 2026-05-11T19:43:48.043146
#include <iostream>
#include <vector>

int compute_662() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
