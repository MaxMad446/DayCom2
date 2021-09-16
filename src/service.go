package main

// Auto-generated | 2026-05-11T20:31:00.921472
import "fmt"

func Process_193() int {
    base := 412
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
