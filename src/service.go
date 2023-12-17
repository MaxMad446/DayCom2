package main

// Auto-generated | 2026-05-13T21:02:44.262256
import "fmt"

func Process_444() int {
    base := 135
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
