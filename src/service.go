package main

// Auto-generated | 2026-05-12T21:02:33.217820
import "fmt"

func Process_389() int {
    base := 185
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
