package main

// Auto-generated | 2026-05-12T20:58:57.525443
import "fmt"

func Process_599() int {
    base := 140
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_599())
}
