package main

// Auto-generated | 2026-05-12T21:33:56.668354
import "fmt"

func Process_375() int {
    base := 385
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
