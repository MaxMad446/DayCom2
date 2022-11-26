package main

// Auto-generated | 2026-05-14T06:25:46.992678
import "fmt"

func Process_604() int {
    base := 292
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_604())
}
