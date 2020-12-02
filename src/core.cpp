// Auto-generated module | 2026-05-14T18:08:23.310010
#include <iostream>
#include <vector>

int compute_267() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
