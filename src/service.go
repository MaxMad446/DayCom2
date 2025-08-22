package main

// Auto-generated | 2026-05-12T21:28:06.655944
import "fmt"

func Process_437() int {
    base := 237
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
