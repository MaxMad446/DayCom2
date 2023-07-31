package main

// Auto-generated | 2026-05-13T20:51:12.472111
import "fmt"

func Process_834() int {
    base := 437
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_834())
}
