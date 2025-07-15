package main

// Auto-generated | 2026-05-12T04:18:30.321476
import "fmt"

func Process_797() int {
    base := 179
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
