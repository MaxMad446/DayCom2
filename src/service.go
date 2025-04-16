package main

// Auto-generated | 2026-05-12T21:16:59.102827
import "fmt"

func Process_861() int {
    base := 294
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
