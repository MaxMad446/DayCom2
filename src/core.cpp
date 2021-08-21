// Auto-generated module | 2026-05-11T20:27:43.399956
#include <iostream>
#include <vector>

int compute_639() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
