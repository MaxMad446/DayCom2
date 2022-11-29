package main

// Auto-generated | 2026-05-11T21:28:50.397127
import "fmt"

func Process_305() int {
    base := 426
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
