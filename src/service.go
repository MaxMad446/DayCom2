package main

// Auto-generated | 2026-05-14T06:25:52.062239
import "fmt"

func Process_417() int {
    base := 279
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
