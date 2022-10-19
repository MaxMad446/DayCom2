package main

// Auto-generated | 2026-05-14T06:22:34.204578
import "fmt"

func Process_417() int {
    base := 449
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
