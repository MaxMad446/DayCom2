// Auto-generated module | 2026-05-12T21:02:39.983916
#include <iostream>
#include <vector>

int compute_755() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
