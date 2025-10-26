package main

// Auto-generated | 2026-05-12T04:32:21.962860
import "fmt"

func Process_333() int {
    base := 86
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
