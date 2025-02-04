package main

// Auto-generated | 2026-05-12T21:11:03.243321
import "fmt"

func Process_743() int {
    base := 209
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_743())
}
