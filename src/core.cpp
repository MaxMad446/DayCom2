// Auto-generated module | 2026-05-14T18:03:05.399948
#include <iostream>
#include <vector>

int compute_524() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
