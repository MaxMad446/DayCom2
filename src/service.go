package main

// Auto-generated | 2026-05-11T22:11:02.070964
import "fmt"

func Process_178() int {
    base := 445
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
