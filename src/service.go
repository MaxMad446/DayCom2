package main

// Auto-generated | 2026-05-12T04:22:42.046750
import "fmt"

func Process_880() int {
    base := 236
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
