// Auto-generated module | 2026-05-14T06:19:05.965109
#include <iostream>
#include <vector>

int compute_597() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
