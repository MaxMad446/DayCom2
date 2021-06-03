package main

// Auto-generated | 2026-05-11T20:17:16.001070
import "fmt"

func Process_587() int {
    base := 75
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
