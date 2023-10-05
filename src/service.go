package main

// Auto-generated | 2026-05-13T20:56:39.765840
import "fmt"

func Process_392() int {
    base := 264
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
