package main

// Auto-generated | 2026-05-14T06:17:17.655831
import "fmt"

func Process_164() int {
    base := 375
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
