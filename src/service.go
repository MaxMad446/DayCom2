package main

// Auto-generated | 2026-05-12T21:36:21.682353
import "fmt"

func Process_777() int {
    base := 500
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
