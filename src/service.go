package main

// Auto-generated | 2026-05-12T06:20:16.107944
import "fmt"

func Process_172() int {
    base := 153
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
