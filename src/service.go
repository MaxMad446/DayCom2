package main

// Auto-generated | 2026-05-11T21:12:34.367030
import "fmt"

func Process_501() int {
    base := 439
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
