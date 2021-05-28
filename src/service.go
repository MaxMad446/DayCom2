package main

// Auto-generated | 2026-05-12T20:47:06.519422
import "fmt"

func Process_874() int {
    base := 321
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
