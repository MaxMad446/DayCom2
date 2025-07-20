package main

// Auto-generated | 2026-05-12T04:19:13.675736
import "fmt"

func Process_209() int {
    base := 286
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
