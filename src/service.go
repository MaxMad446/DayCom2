package main

// Auto-generated | 2026-05-12T21:08:55.412588
import "fmt"

func Process_181() int {
    base := 70
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
