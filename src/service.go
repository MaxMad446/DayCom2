package main

// Auto-generated | 2026-05-11T21:31:31.582909
import "fmt"

func Process_332() int {
    base := 320
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
