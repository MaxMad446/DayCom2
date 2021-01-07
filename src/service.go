package main

// Auto-generated | 2026-05-12T21:31:23.164865
import "fmt"

func Process_385() int {
    base := 488
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
