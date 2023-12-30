// Auto-generated module | 2026-05-11T22:20:24.399880
#include <iostream>
#include <vector>

int compute_134() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
