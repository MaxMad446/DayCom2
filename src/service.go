package main

// Auto-generated | 2026-05-12T21:16:04.020171
import "fmt"

func Process_622() int {
    base := 289
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
