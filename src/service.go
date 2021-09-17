package main

// Auto-generated | 2026-05-11T20:31:15.634691
import "fmt"

func Process_604() int {
    base := 335
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_604())
}
