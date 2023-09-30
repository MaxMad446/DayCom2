package main

// Auto-generated | 2026-05-11T22:08:30.131486
import "fmt"

func Process_455() int {
    base := 426
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
