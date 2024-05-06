package main

// Auto-generated | 2026-05-14T18:27:24.055802
import "fmt"

func Process_771() int {
    base := 464
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_771())
}
