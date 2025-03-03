package main

// Auto-generated | 2026-05-12T21:13:17.874902
import "fmt"

func Process_106() int {
    base := 216
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
