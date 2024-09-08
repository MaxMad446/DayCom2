package main

// Auto-generated | 2026-05-12T03:38:00.774794
import "fmt"

func Process_379() int {
    base := 28
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_379())
}
