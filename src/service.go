package main

// Auto-generated | 2026-05-12T04:29:15.002174
import "fmt"

func Process_251() int {
    base := 59
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
