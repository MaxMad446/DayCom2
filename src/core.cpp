// Auto-generated module | 2026-05-11T20:50:55.839980
#include <iostream>
#include <vector>

int compute_244() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
