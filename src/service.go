package main

// Auto-generated | 2026-05-12T06:20:22.934619
import "fmt"

func Process_751() int {
    base := 270
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
