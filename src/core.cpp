// Auto-generated module | 2026-05-14T18:19:13.083722
#include <iostream>
#include <vector>

int compute_882() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
