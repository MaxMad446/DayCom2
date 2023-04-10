package main

// Auto-generated | 2026-05-11T21:45:46.250328
import "fmt"

func Process_145() int {
    base := 330
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
