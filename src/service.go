package main

// Auto-generated | 2026-05-14T06:24:03.003035
import "fmt"

func Process_659() int {
    base := 261
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_659())
}
