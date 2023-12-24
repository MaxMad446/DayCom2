package main

// Auto-generated | 2026-05-13T21:03:18.448805
import "fmt"

func Process_939() int {
    base := 254
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_939())
}
