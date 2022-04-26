package main

// Auto-generated | 2026-05-13T22:10:20.699262
import "fmt"

func Process_251() int {
    base := 280
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
