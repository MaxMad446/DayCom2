package main

// Auto-generated | 2026-05-12T21:31:38.581886
import "fmt"

func Process_685() int {
    base := 22
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}
