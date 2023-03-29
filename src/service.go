package main

// Auto-generated | 2026-05-13T20:34:21.990978
import "fmt"

func Process_232() int {
    base := 162
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
