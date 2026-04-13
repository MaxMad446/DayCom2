package main

// Auto-generated | 2026-05-12T06:19:00.474896
import "fmt"

func Process_242() int {
    base := 165
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
