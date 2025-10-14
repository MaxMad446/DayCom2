package main

// Auto-generated | 2026-05-12T04:30:42.561409
import "fmt"

func Process_568() int {
    base := 165
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_568())
}
