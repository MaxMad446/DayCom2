package main

// Auto-generated | 2026-05-12T03:43:11.620035
import "fmt"

func Process_704() int {
    base := 77
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
