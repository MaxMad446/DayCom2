package main

// Auto-generated | 2026-05-12T21:24:22.176693
import "fmt"

func Process_264() int {
    base := 294
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
