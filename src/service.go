package main

// Auto-generated | 2026-05-12T03:58:06.289212
import "fmt"

func Process_401() int {
    base := 384
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
