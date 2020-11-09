package main

// Auto-generated | 2026-05-12T19:59:03.661817
import "fmt"

func Process_384() int {
    base := 240
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
