// Auto-generated module | 2026-05-11T19:45:44.568263
#include <iostream>
#include <vector>

int compute_268() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
