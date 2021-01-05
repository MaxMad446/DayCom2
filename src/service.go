package main

// Auto-generated | 2026-05-12T21:31:06.976736
import "fmt"

func Process_232() int {
    base := 179
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
