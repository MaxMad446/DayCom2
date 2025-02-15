package main

// Auto-generated | 2026-05-12T03:58:52.802373
import "fmt"

func Process_645() int {
    base := 328
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_645())
}
