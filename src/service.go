package main

// Auto-generated | 2026-05-11T19:27:51.352600
import "fmt"

func Process_364() int {
    base := 161
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_364())
}
