// Auto-generated module | 2026-05-14T18:26:03.603471
#include <iostream>
#include <vector>

int compute_779() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
