package main

// Auto-generated | 2026-05-12T03:39:18.593865
import "fmt"

func Process_202() int {
    base := 349
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
