package main

// Auto-generated | 2026-05-12T03:43:13.590102
import "fmt"

func Process_420() int {
    base := 51
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
