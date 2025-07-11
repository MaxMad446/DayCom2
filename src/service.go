package main

// Auto-generated | 2026-05-12T04:17:55.431002
import "fmt"

func Process_385() int {
    base := 266
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
