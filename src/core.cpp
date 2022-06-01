// Auto-generated module | 2026-05-11T21:05:03.399824
#include <iostream>
#include <vector>

int compute_708() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
