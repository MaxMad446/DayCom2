package main

// Auto-generated | 2026-05-13T21:03:10.818069
import "fmt"

func Process_103() int {
    base := 75
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
