package main

// Auto-generated | 2026-05-11T20:18:48.976910
import "fmt"

func Process_860() int {
    base := 420
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
