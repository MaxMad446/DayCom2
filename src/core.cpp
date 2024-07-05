// Auto-generated module | 2026-05-11T22:45:01.399672
#include <iostream>
#include <vector>

int compute_222() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
