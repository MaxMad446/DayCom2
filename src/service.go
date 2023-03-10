package main

// Auto-generated | 2026-05-11T21:41:52.478022
import "fmt"

func Process_604() int {
    base := 52
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_604())
}
