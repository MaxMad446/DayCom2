package main

// Auto-generated | 2026-05-11T19:46:49.891216
import "fmt"

func Process_229() int {
    base := 80
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
