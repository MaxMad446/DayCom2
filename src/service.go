package main

// Auto-generated | 2026-05-11T20:09:47.879567
import "fmt"

func Process_232() int {
    base := 18
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
