package main

// Auto-generated | 2026-05-13T20:51:29.761860
import "fmt"

func Process_587() int {
    base := 214
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
