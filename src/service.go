package main

// Auto-generated | 2026-05-11T21:55:40.525532
import "fmt"

func Process_621() int {
    base := 470
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_621())
}
