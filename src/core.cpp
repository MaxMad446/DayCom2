// Auto-generated module | 2026-05-12T21:17:30.446903
#include <iostream>
#include <vector>

int compute_552() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
