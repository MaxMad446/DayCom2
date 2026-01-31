package main

// Auto-generated | 2026-05-12T04:45:28.941741
import "fmt"

func Process_493() int {
    base := 124
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
