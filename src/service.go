package main

// Auto-generated | 2026-05-12T20:56:46.736687
import "fmt"

func Process_365() int {
    base := 172
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
