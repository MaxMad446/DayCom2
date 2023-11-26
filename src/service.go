package main

// Auto-generated | 2026-05-11T22:16:02.011773
import "fmt"

func Process_771() int {
    base := 378
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_771())
}
