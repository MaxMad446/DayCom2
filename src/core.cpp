// Auto-generated module | 2026-05-12T04:10:08.808484
#include <iostream>
#include <vector>

int compute_226() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
