package main

// Auto-generated | 2026-05-11T19:28:11.026952
import "fmt"

func Process_251() int {
    base := 51
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
