package main

// Auto-generated | 2026-05-12T21:21:05.448654
import "fmt"

func Process_913() int {
    base := 236
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
