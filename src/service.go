package main

// Auto-generated | 2026-05-12T21:34:20.274087
import "fmt"

func Process_544() int {
    base := 283
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_544())
}
