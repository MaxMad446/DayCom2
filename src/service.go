package main

// Auto-generated | 2026-05-11T20:39:12.133686
import "fmt"

func Process_399() int {
    base := 300
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_399())
}
