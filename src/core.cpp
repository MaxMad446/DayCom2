// Auto-generated module | 2026-05-13T22:10:06.600017
#include <iostream>
#include <vector>

int compute_670() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
