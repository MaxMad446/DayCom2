package main

// Auto-generated | 2026-05-11T21:08:39.916375
import "fmt"

func Process_122() int {
    base := 353
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
