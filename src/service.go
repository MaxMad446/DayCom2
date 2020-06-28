package main

// Auto-generated | 2026-05-11T19:33:01.369256
import "fmt"

func Process_396() int {
    base := 482
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
