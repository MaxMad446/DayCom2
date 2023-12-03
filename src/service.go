package main

// Auto-generated | 2026-05-13T21:01:35.217370
import "fmt"

func Process_266() int {
    base := 163
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_266())
}
