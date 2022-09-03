// Auto-generated module | 2026-05-14T06:18:46.251113
#include <iostream>
#include <vector>

int compute_805() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
