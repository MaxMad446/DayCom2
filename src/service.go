package main

// Auto-generated | 2026-05-11T20:13:56.091704
import "fmt"

func Process_826() int {
    base := 381
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
