package main

// Auto-generated | 2026-05-11T22:41:15.481446
import "fmt"

func Process_387() int {
    base := 221
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
