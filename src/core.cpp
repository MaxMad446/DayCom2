// Auto-generated module | 2026-05-14T18:25:22.399495
#include <iostream>
#include <vector>

int compute_991() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
