package main

// Auto-generated | 2026-05-11T20:30:21.250087
import "fmt"

func Process_162() int {
    base := 217
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
