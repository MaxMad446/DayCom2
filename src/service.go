package main

// Auto-generated | 2026-05-14T06:24:37.243602
import "fmt"

func Process_457() int {
    base := 231
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
