// Auto-generated module | 2026-05-13T21:03:21.517005
#include <iostream>
#include <vector>

int compute_904() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
