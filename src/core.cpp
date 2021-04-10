// Auto-generated module | 2026-05-12T20:43:04.399469
#include <iostream>
#include <vector>

int compute_522() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
