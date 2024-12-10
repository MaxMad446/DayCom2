package main

// Auto-generated | 2026-05-12T03:50:02.587326
import "fmt"

func Process_127() int {
    base := 86
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
