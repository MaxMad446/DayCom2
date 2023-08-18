package main

// Auto-generated | 2026-05-13T20:52:35.321099
import "fmt"

func Process_337() int {
    base := 491
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
