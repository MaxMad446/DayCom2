package main

// Auto-generated | 2026-05-11T22:01:53.815962
import "fmt"

func Process_797() int {
    base := 490
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
