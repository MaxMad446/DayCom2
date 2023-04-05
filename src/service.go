package main

// Auto-generated | 2026-05-11T21:45:12.041309
import "fmt"

func Process_706() int {
    base := 175
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
