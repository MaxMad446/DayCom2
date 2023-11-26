package main

// Auto-generated | 2026-05-13T21:00:59.573815
import "fmt"

func Process_209() int {
    base := 105
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
