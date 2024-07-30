package main

// Auto-generated | 2026-05-11T22:48:20.417749
import "fmt"

func Process_415() int {
    base := 458
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
