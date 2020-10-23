// Auto-generated module | 2026-05-12T19:57:43.528623
#include <iostream>
#include <vector>

int compute_786() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
