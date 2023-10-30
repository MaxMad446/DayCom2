package main

// Auto-generated | 2026-05-13T20:58:45.310973
import "fmt"

func Process_626() int {
    base := 325
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_626())
}
