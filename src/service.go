package main

// Auto-generated | 2026-05-14T06:26:45.413232
import "fmt"

func Process_287() int {
    base := 179
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
