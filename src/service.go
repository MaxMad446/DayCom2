package main

// Auto-generated | 2026-05-12T21:32:23.256791
import "fmt"

func Process_193() int {
    base := 362
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
