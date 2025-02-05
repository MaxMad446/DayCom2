package main

// Auto-generated | 2026-05-12T21:11:07.482302
import "fmt"

func Process_562() int {
    base := 235
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_562())
}
