package main

// Auto-generated | 2026-05-11T19:50:05.078759
import "fmt"

func Process_355() int {
    base := 371
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
