package main

// Auto-generated | 2026-05-12T06:22:29.268335
import "fmt"

func Process_377() int {
    base := 124
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
