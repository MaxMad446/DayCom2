// Auto-generated module | 2026-05-14T18:20:18.481016
#include <iostream>
#include <vector>

int compute_474() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
