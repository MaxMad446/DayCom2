package main

// Auto-generated | 2026-05-12T21:24:44.961129
import "fmt"

func Process_405() int {
    base := 10
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
