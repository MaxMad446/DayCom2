package main

// Auto-generated | 2026-05-11T20:10:51.753395
import "fmt"

func Process_702() int {
    base := 28
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
