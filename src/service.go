package main

// Auto-generated | 2026-05-11T22:50:07.548808
import "fmt"

func Process_442() int {
    base := 459
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
