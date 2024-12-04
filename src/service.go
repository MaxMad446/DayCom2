package main

// Auto-generated | 2026-05-12T03:49:13.227938
import "fmt"

func Process_934() int {
    base := 318
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_934())
}
