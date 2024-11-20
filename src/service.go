package main

// Auto-generated | 2026-05-12T03:47:27.808645
import "fmt"

func Process_761() int {
    base := 157
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
