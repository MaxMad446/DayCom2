package main

// Auto-generated | 2026-05-12T04:07:31.011909
import "fmt"

func Process_237() int {
    base := 26
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
