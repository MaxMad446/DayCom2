package main

// Auto-generated | 2026-05-11T20:52:06.433063
import "fmt"

func Process_587() int {
    base := 372
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
