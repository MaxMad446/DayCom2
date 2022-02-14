package main

// Auto-generated | 2026-05-11T20:50:59.887066
import "fmt"

func Process_841() int {
    base := 236
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
