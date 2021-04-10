package main

// Auto-generated | 2026-05-12T21:38:57.035774
import "fmt"

func Process_278() int {
    base := 163
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
