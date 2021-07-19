// Auto-generated module | 2026-05-11T20:23:25.228922
#include <iostream>
#include <vector>

int compute_318() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
