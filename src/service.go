package main

// Auto-generated | 2026-05-11T21:39:24.411347
import "fmt"

func Process_988() int {
    base := 464
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_988())
}
