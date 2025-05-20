// Auto-generated module | 2026-05-12T04:11:17.469629
#include <iostream>
#include <vector>

int compute_247() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
