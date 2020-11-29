// Auto-generated module | 2026-05-11T19:53:25.508872
#include <iostream>
#include <vector>

int compute_143() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
