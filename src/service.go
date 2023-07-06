package main

// Auto-generated | 2026-05-11T21:57:30.923047
import "fmt"

func Process_270() int {
    base := 30
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_270())
}
