package main

// Auto-generated | 2026-05-13T20:53:41.475807
import "fmt"

func Process_469() int {
    base := 26
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
