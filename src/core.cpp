// Auto-generated module | 2026-05-12T04:18:56.849862
#include <iostream>
#include <vector>

int compute_647() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
