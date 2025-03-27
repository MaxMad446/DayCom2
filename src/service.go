package main

// Auto-generated | 2026-05-12T21:15:12.252105
import "fmt"

func Process_612() int {
    base := 167
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
