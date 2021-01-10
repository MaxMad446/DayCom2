package main

// Auto-generated | 2026-05-11T19:58:46.658858
import "fmt"

func Process_402() int {
    base := 184
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
