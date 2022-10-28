// Auto-generated module | 2026-05-14T06:23:21.352714
#include <iostream>
#include <vector>

int compute_271() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
