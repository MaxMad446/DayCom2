// Auto-generated module | 2026-05-14T18:10:30.853638
#include <iostream>
#include <vector>

int compute_127() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
