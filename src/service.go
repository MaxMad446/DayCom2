package main

// Auto-generated | 2026-05-14T06:27:20.169221
import "fmt"

func Process_258() int {
    base := 305
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
