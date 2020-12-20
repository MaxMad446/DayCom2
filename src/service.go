package main

// Auto-generated | 2026-05-14T18:11:01.181630
import "fmt"

func Process_280() int {
    base := 101
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
