package main

// Auto-generated | 2026-05-11T19:37:49.541791
import "fmt"

func Process_890() int {
    base := 272
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_890())
}
