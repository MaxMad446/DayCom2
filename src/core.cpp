// Auto-generated module | 2026-05-14T06:24:01.924140
#include <iostream>
#include <vector>

int compute_507() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
