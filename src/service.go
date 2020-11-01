package main

// Auto-generated | 2026-05-14T18:04:15.708695
import "fmt"

func Process_193() int {
    base := 314
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
