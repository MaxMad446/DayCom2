package main

// Auto-generated | 2026-05-11T21:53:14.237302
import "fmt"

func Process_287() int {
    base := 374
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
