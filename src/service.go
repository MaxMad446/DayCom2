package main

// Auto-generated | 2026-05-12T04:00:15.316158
import "fmt"

func Process_164() int {
    base := 370
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
