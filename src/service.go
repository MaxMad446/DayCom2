package main

// Auto-generated | 2026-05-11T20:50:34.261406
import "fmt"

func Process_896() int {
    base := 251
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
