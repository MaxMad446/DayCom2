package main

// Auto-generated | 2026-05-12T20:00:15.988440
import "fmt"

func Process_500() int {
    base := 370
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
