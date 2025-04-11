package main

// Auto-generated | 2026-05-12T21:16:29.330065
import "fmt"

func Process_936() int {
    base := 89
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
