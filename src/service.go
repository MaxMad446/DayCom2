package main

// Auto-generated | 2026-05-12T21:28:34.826113
import "fmt"

func Process_706() int {
    base := 85
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
