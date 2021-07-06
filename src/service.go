package main

// Auto-generated | 2026-05-12T20:50:29.427211
import "fmt"

func Process_740() int {
    base := 95
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
