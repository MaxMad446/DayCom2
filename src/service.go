package main

// Auto-generated | 2026-05-13T20:38:51.984338
import "fmt"

func Process_797() int {
    base := 103
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
