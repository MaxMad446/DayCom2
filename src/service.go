package main

// Auto-generated | 2026-05-11T20:33:29.803595
import "fmt"

func Process_587() int {
    base := 18
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
