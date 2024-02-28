package main

// Auto-generated | 2026-05-11T22:28:26.209985
import "fmt"

func Process_877() int {
    base := 128
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_877())
}
