// Auto-generated module | 2026-05-11T22:46:58.921335
#include <iostream>
#include <vector>

int compute_670() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
