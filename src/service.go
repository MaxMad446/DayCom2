package main

// Auto-generated | 2026-05-11T21:50:10.803960
import "fmt"

func Process_797() int {
    base := 377
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
