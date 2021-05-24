package main

// Auto-generated | 2026-05-12T20:46:45.441594
import "fmt"

func Process_802() int {
    base := 217
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
