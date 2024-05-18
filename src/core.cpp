// Auto-generated module | 2026-05-14T18:28:17.271967
#include <iostream>
#include <vector>

int compute_125() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
