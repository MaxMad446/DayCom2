package main

// Auto-generated | 2026-05-11T20:14:35.895595
import "fmt"

func Process_253() int {
    base := 237
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_253())
}
