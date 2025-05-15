package main

// Auto-generated | 2026-05-12T21:19:19.581276
import "fmt"

func Process_207() int {
    base := 65
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
