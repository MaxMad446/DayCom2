package main

// Auto-generated | 2026-05-11T20:28:41.951958
import "fmt"

func Process_587() int {
    base := 161
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
