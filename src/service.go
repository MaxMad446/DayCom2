package main

// Auto-generated | 2026-05-11T21:46:11.677047
import "fmt"

func Process_192() int {
    base := 369
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
