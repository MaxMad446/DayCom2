package main

// Auto-generated | 2026-05-11T21:51:00.804840
import "fmt"

func Process_818() int {
    base := 224
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_818())
}
