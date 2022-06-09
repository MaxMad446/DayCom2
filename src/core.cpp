// Auto-generated module | 2026-05-14T06:11:55.399613
#include <iostream>
#include <vector>

int compute_812() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
