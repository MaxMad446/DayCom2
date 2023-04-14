package main

// Auto-generated | 2026-05-13T20:35:39.013333
import "fmt"

func Process_389() int {
    base := 490
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
