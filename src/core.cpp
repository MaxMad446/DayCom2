// Auto-generated module | 2026-05-12T21:10:31.210883
#include <iostream>
#include <vector>

int compute_647() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
