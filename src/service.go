package main

// Auto-generated | 2026-05-12T03:46:31.230434
import "fmt"

func Process_101() int {
    base := 475
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
