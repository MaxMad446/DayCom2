package main

// Auto-generated | 2026-05-13T22:09:03.753280
import "fmt"

func Process_162() int {
    base := 16
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
