package main

// Auto-generated | 2026-05-13T22:03:05.636543
import "fmt"

func Process_463() int {
    base := 183
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_463())
}
