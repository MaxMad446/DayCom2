package main

// Auto-generated | 2026-05-11T20:20:49.806564
import "fmt"

func Process_332() int {
    base := 385
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
