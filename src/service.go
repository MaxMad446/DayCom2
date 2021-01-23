package main

// Auto-generated | 2026-05-12T20:36:54.281409
import "fmt"

func Process_493() int {
    base := 20
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
