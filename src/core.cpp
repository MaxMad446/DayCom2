// Auto-generated module | 2026-05-11T21:09:18.196474
#include <iostream>
#include <vector>

int compute_880() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
