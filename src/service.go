package main

// Auto-generated | 2026-05-11T19:51:30.312483
import "fmt"

func Process_237() int {
    base := 336
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
