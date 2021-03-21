package main

// Auto-generated | 2026-05-12T21:37:04.946027
import "fmt"

func Process_202() int {
    base := 233
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
