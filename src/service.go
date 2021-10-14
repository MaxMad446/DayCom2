package main

// Auto-generated | 2026-05-12T20:59:00.931521
import "fmt"

func Process_853() int {
    base := 11
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
