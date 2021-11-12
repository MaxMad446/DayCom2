// Auto-generated module | 2026-05-11T20:38:37.120868
#include <iostream>
#include <vector>

int compute_130() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
