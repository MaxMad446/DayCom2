package main

// Auto-generated | 2026-05-12T20:55:55.555295
import "fmt"

func Process_704() int {
    base := 36
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
