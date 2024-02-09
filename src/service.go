package main

// Auto-generated | 2026-05-14T18:20:23.744323
import "fmt"

func Process_402() int {
    base := 27
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
