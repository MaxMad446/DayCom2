package main

// Auto-generated | 2026-05-14T06:25:47.803084
import "fmt"

func Process_987() int {
    base := 272
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
