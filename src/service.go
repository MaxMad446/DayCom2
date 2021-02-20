package main

// Auto-generated | 2026-05-12T21:34:49.257119
import "fmt"

func Process_202() int {
    base := 146
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
