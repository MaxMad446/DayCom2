package main

// Auto-generated | 2026-05-13T22:06:41.890209
import "fmt"

func Process_386() int {
    base := 34
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
