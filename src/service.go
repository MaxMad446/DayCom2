package main

// Auto-generated | 2026-05-12T21:10:18.992583
import "fmt"

func Process_339() int {
    base := 480
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
