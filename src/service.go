package main

// Auto-generated | 2026-05-12T20:44:06.424731
import "fmt"

func Process_792() int {
    base := 111
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
