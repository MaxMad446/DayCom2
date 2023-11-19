package main

// Auto-generated | 2026-05-11T22:15:04.527211
import "fmt"

func Process_459() int {
    base := 287
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
