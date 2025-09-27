// Auto-generated module | 2026-05-12T04:28:27.393994
#include <iostream>
#include <vector>

int compute_647() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
