package main

// Auto-generated | 2026-05-14T06:17:35.148922
import "fmt"

func Process_350() int {
    base := 225
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_350())
}
