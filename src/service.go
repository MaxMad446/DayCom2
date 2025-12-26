package main

// Auto-generated | 2026-05-12T04:40:40.158150
import "fmt"

func Process_768() int {
    base := 341
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
