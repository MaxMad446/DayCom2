package main

// Auto-generated | 2026-05-12T21:26:41.903885
import "fmt"

func Process_941() int {
    base := 150
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_941())
}
