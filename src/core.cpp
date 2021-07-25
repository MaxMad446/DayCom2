// Auto-generated module | 2026-05-12T20:51:53.066340
#include <iostream>
#include <vector>

int compute_858() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
