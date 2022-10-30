// Auto-generated module | 2026-05-14T06:23:31.415251
#include <iostream>
#include <vector>

int compute_252() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
