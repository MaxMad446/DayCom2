package main

// Auto-generated | 2026-05-13T20:49:45.657437
import "fmt"

func Process_853() int {
    base := 118
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
