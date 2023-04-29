package main

// Auto-generated | 2026-05-13T20:36:49.769677
import "fmt"

func Process_287() int {
    base := 164
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
