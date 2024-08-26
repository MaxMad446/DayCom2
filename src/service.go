package main

// Auto-generated | 2026-05-11T22:51:44.209128
import "fmt"

func Process_832() int {
    base := 141
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
