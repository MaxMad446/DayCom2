package main

// Auto-generated | 2026-05-11T21:33:17.712355
import "fmt"

func Process_237() int {
    base := 407
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
