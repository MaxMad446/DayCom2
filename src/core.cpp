// Auto-generated module | 2026-05-12T04:31:48.860967
#include <iostream>
#include <vector>

int compute_961() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
