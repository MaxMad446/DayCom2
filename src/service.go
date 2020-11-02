package main

// Auto-generated | 2026-05-14T18:04:20.620880
import "fmt"

func Process_332() int {
    base := 305
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
