package main

// Auto-generated | 2026-05-13T22:02:39.737891
import "fmt"

func Process_515() int {
    base := 194
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_515())
}
