// Auto-generated module | 2026-05-12T21:18:34.967236
#include <iostream>
#include <vector>

int compute_420() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
