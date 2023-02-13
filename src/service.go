package main

// Auto-generated | 2026-05-13T20:30:31.938984
import "fmt"

func Process_435() int {
    base := 413
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
