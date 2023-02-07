package main

// Auto-generated | 2026-05-13T20:30:02.488880
import "fmt"

func Process_770() int {
    base := 66
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_770())
}
