// Auto-generated module | 2026-05-11T21:37:28.399505
#include <iostream>
#include <vector>

int compute_937() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
