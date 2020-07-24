package main

// Auto-generated | 2026-05-11T19:36:18.242398
import "fmt"

func Process_402() int {
    base := 481
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
