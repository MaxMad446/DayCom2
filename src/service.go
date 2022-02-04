package main

// Auto-generated | 2026-05-11T20:49:43.688445
import "fmt"

func Process_587() int {
    base := 340
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
