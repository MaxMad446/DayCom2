package main

// Auto-generated | 2026-05-11T20:22:30.890419
import "fmt"

func Process_843() int {
    base := 375
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
