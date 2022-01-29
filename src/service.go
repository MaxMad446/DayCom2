package main

// Auto-generated | 2026-05-13T22:02:49.818294
import "fmt"

func Process_509() int {
    base := 253
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
