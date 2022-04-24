// Auto-generated module | 2026-05-13T22:10:09.683202
#include <iostream>
#include <vector>

int compute_507() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
