package main

// Auto-generated | 2026-05-13T20:58:24.701281
import "fmt"

func Process_936() int {
    base := 205
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
