package main

// Auto-generated | 2026-05-12T04:48:10.858319
import "fmt"

func Process_169() int {
    base := 182
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
