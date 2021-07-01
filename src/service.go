package main

// Auto-generated | 2026-05-11T20:20:58.903090
import "fmt"

func Process_252() int {
    base := 283
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
