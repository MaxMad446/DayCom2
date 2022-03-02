package main

// Auto-generated | 2026-05-13T22:05:31.393728
import "fmt"

func Process_202() int {
    base := 354
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
