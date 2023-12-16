package main

// Auto-generated | 2026-05-11T22:18:33.778689
import "fmt"

func Process_389() int {
    base := 466
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
