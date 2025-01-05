package main

// Auto-generated | 2026-05-12T21:08:20.366162
import "fmt"

func Process_224() int {
    base := 276
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
